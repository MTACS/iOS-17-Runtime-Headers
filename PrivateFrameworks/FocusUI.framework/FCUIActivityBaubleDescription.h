
@interface FCUIActivityBaubleDescription : NSObject <FCUIActivityBaubleDescribing> {
    NSString * _systemImageName;
    UIColor * _tintColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) UIColor *tintColor;

- (void).cxx_destruct;
- (id)completeDescriptionWithReferencePointSize:(double)arg1 maximumPointSize:(double)arg2 referenceDimension:(double)arg3;
- (id)initWithActivityDescription:(id)arg1;
- (id)initWithSystemImageName:(id)arg1 tintColor:(id)arg2;
- (id)systemImageName;
- (id)tintColor;

@end
