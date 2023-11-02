
@interface AVVCDuckLevel : NSObject {
    bool  _isBlur;
    NSNumber * _value;
}

@property (nonatomic) bool isBlur;
@property (nonatomic, retain) NSNumber *value;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)isBlur;
- (void)setIsBlur:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
