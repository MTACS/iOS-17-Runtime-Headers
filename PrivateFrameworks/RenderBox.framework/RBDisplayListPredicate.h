
@interface RBDisplayListPredicate : NSObject <NSCopying> {
    struct Invertible { 
        struct DisplayListPredicate { 
            struct vector<RB::DisplayListPredicate::Term, 1UL, unsigned int> { 
                unsigned char _p[24]; 
                struct Term {} *_p; 
                unsigned int _size; 
                unsigned int _capacity; 
            } _terms; 
        } predicate; 
        bool inverts_result; 
    }  _predicate;
}

@property (nonatomic) bool invertsResult;

+ (id)predicate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCondition:(int)arg1;
- (void)addConditionWithFillColor:(struct { float x1; float x2; float x3; float x4; })arg1 colorSpace:(int)arg2;
- (void)addPredicate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filteringDisplayList:(id)arg1;
- (bool)invertsResult;
- (void)removeAll;
- (void)setInvertsResult:(bool)arg1;

@end
