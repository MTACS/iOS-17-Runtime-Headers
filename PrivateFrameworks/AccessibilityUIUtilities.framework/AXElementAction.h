
@interface AXElementAction : NSObject {
    NSString * _customActionIdentifier;
    id  _dragActivationToken;
    struct CGPoint { 
        double x; 
        double y; 
    }  _dropPoint;
    AXElement * _element;
    unsigned long long  _medusaGesture;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, retain) NSString *customActionIdentifier;
@property (nonatomic, retain) id dragActivationToken;
@property (nonatomic) struct CGPoint { double x1; double x2; } dropPoint;
@property (nonatomic, retain) AXElement *element;
@property (nonatomic) unsigned long long medusaGesture;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)customActionIdentifier;
- (id)dragActivationToken;
- (struct CGPoint { double x1; double x2; })dropPoint;
- (id)element;
- (unsigned long long)medusaGesture;
- (id)name;
- (void)setCustomActionIdentifier:(id)arg1;
- (void)setDragActivationToken:(id)arg1;
- (void)setDropPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setElement:(id)arg1;
- (void)setMedusaGesture:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
