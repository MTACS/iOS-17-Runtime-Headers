
@interface FCUIActivityBaubleCompleteDescription : FCUIActivityBaubleDescription <FCUIActivityBaubleLayoutDescribing> {
    double  _maximumPointSize;
    double  _referenceDimension;
    double  _referencePointSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double maximumPointSize;
@property (nonatomic, readonly) double referenceDimension;
@property (nonatomic, readonly) double referencePointSize;
@property (readonly) Class superclass;

- (id)initWithActivityDescription:(id)arg1 referencePointSize:(double)arg2 maximumPointSize:(double)arg3 referenceDimension:(double)arg4;
- (id)initWithSystemImageName:(id)arg1 tintColor:(id)arg2 referencePointSize:(double)arg3 maximumPointSize:(double)arg4 referenceDimension:(double)arg5;
- (double)maximumPointSize;
- (double)referenceDimension;
- (double)referencePointSize;

@end
