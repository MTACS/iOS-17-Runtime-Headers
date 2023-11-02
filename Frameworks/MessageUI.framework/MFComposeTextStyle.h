
@interface MFComposeTextStyle : NSObject {
    NSString * _accessibilityIdenitifier;
    SEL  _editSelector;
    NSString * _imageName;
    long long  _styleType;
}

@property (nonatomic, readonly, copy) NSString *accessibilityIdenitifier;
@property (nonatomic, readonly) SEL editSelector;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly) long long styleType;

+ (id)accessibilityIdenitifierForTextStyleType:(long long)arg1;
+ (id)composeTextStyleForTextStyleType:(long long)arg1;
+ (SEL)editSelectorForTextStyleType:(long long)arg1;
+ (id)imageNameForTextStyleType:(long long)arg1;
+ (bool)isTextListStyleOrdered:(id)arg1;

- (void).cxx_destruct;
- (id)accessibilityIdenitifier;
- (SEL)editSelector;
- (id)imageName;
- (id)initWithTextStyleType:(long long)arg1;
- (long long)styleType;

@end
