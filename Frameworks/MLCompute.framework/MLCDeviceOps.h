
@interface MLCDeviceOps : NSObject <NSCopying> {
    unsigned long long  _batchSize;
    id  _result;
    bool  _resultOfForwardNeededForGradient;
    id  _secondarySource;
    id  _source;
    bool  _sourceOfForwardNeededForGradient;
    id  _tertiarySource;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic, retain) id result;
@property (nonatomic) bool resultOfForwardNeededForGradient;
@property (nonatomic, retain) id secondarySource;
@property (nonatomic, retain) id source;
@property (nonatomic) bool sourceOfForwardNeededForGradient;
@property (nonatomic, retain) id tertiarySource;

- (void).cxx_destruct;
- (unsigned long long)batchSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSource:(id)arg1 secondarySource:(id)arg2 result:(id)arg3 batchSize:(unsigned long long)arg4;
- (id)result;
- (bool)resultOfForwardNeededForGradient;
- (id)secondarySource;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setResult:(id)arg1;
- (void)setResultOfForwardNeededForGradient:(bool)arg1;
- (void)setSecondarySource:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSourceOfForwardNeededForGradient:(bool)arg1;
- (void)setTertiarySource:(id)arg1;
- (id)source;
- (bool)sourceOfForwardNeededForGradient;
- (id)tertiarySource;

@end
