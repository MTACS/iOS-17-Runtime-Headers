
@interface VOSScreenreaderMode : NSObject {
    NSString * _rawValue;
}

@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *rawValue;

+ (id)BrailleScreenInput;
+ (id)Default;
+ (id)Handwriting;
+ (id)Invalid;
+ (id)allModes;
+ (id)modeWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithRawValue:(id)arg1;
- (id)description;
- (id)localizedName;
- (id)rawValue;

@end
