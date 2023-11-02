
@interface SXAXCustomRotor : UIAccessibilityCustomRotor {
    NSOrderedSet * _rotorItems;
}

@property (nonatomic, copy) NSOrderedSet *rotorItems;

+ (id)rotorWithName:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (long long)indexOfRotorItem:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)rotorItemAfter:(id)arg1;
- (id)rotorItemBefore:(id)arg1;
- (id)rotorItems;
- (void)setRotorItems:(id)arg1;

@end
