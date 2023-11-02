
@interface WFTTSSpokenVariant : NSObject <WFTTSStringAnnotation, WFTTSStringComponent> {
    NSString * _displayString;
    NSString * _spokenString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayString;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *spokenString;
@property (readonly) Class superclass;

+ (id)parseAnnotationString:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)displayString;
- (id)initWithDisplayString:(id)arg1 spokenString:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)spokenString;

@end
