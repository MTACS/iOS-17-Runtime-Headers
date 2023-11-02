
@interface AADataEventTraits : NSObject {
    void discardWhenPresent;
    void onlyOnce;
    void unique;
}

@property (nonatomic) bool discardWhenPresent;
@property (nonatomic) bool onlyOnce;
@property (nonatomic) bool unique;

- (bool)discardWhenPresent;
- (id)init;
- (bool)onlyOnce;
- (void)setDiscardWhenPresent:(bool)arg1;
- (void)setOnlyOnce:(bool)arg1;
- (void)setUnique:(bool)arg1;
- (bool)unique;

@end
