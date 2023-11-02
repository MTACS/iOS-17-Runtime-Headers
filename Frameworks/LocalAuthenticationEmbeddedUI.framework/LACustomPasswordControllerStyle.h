
@interface LACustomPasswordControllerStyle : NSObject {
    unsigned long long  _rawValue;
}

@property (nonatomic, readonly) unsigned long long rawValue;

+ (id)fullScreenStyle;
+ (id)sheetStyle;

- (unsigned long long)rawValue;

@end
