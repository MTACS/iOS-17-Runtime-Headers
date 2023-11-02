
@interface TCFontName : NSObject {
    NSString * _fullName;
    NSString * _styleName;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *styleName;

- (void).cxx_destruct;
- (id)description;
- (id)equivalentDictionary;
- (id)fullName;
- (id)initWithDictionary:(id)arg1;
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;
- (id)styleName;

@end
