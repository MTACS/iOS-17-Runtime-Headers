
@interface MKHTTPContentPayload : NSObject {
    bool  _isExcludedFromBackup;
    bool  _isRequired;
}

@property (nonatomic) bool isExcludedFromBackup;
@property (nonatomic) bool isRequired;

- (id)initWithHeaderValue:(id)arg1;
- (bool)isExcludedFromBackup;
- (bool)isRequired;
- (void)setIsExcludedFromBackup:(bool)arg1;
- (void)setIsRequired:(bool)arg1;

@end
