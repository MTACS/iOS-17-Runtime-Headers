
@interface OZPerson3DSCNSceneBuilder : NSObject {
    unsigned long long  _geometryMode;
    struct map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> { 
        struct __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _jointNodeMap;
    struct map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> { 
        struct __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _limbNodeMap;
    SCNNode * _rootNode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addNode:(id)arg1 joint:(unsigned long long)arg2 node:(id)arg3;
- (void)addNode:(id)arg1 limb:(unsigned long long)arg2 node:(id)arg3;
- (void)buildPersonGeometry:(id)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })defaultTransform:(unsigned long long)arg1;
- (void)enablePhysics:(bool)arg1;
- (struct SCNMatrix4Pair { struct SCNMatrix4 { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; struct SCNMatrix4 { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; float x_2_1_10; float x_2_1_11; float x_2_1_12; float x_2_1_13; float x_2_1_14; float x_2_1_15; float x_2_1_16; } x2; })getJointTransformsForLimb:(unsigned long long)arg1;
- (id)getRootNode;
- (id)initWithName:(id)arg1;
- (id)newNodeForJoint:(unsigned long long)arg1;
- (id)newNodeForLimb:(unsigned long long)arg1;
- (id)newRoundCylinderForRoot;
- (void)runOnAllBodyGeometry:(id /* block */)arg1;
- (void)setFriction:(float)arg1;
- (void)setMass:(float)arg1;
- (void)setOpacity:(float)arg1;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 forJoint:(unsigned long long)arg2;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 node:(id)arg2;
- (void)updateConeLimbGeometry:(id)arg1 upperRadius:(float)arg2 lowerRadius:(float)arg3 length:(float)arg4;
- (void)updateCylinderLimbGeometry:(id)arg1 length:(float)arg2;
- (void)updateGeometry;
- (void)updateSimpleGeometry:(float)arg1;

@end
