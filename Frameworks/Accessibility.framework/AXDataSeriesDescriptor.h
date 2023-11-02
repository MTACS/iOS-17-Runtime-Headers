
@interface AXDataSeriesDescriptor : NSObject <AXDictionaryRepresentable, NSCopying> {
    NSAttributedString * _attributedName;
    NSArray * _dataPoints;
    bool  _isContinuous;
    NSString * _meanValueDescription;
}

@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic, copy) NSArray *dataPoints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContinuous;
@property (nonatomic, copy) NSString *meanValueDescription;
@property (nonatomic, readonly) double meanYValue;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_commonInitWithContinuous:(bool)arg1 dataPoints:(id)arg2;
- (id)_mutableArrayOfNSNullWithCount:(long long)arg1;
- (id)attributedName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataPoints;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithAttributedName:(id)arg1 isContinuous:(bool)arg2 dataPoints:(id)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 isContinuous:(bool)arg2 dataPoints:(id)arg3;
- (bool)isContinuous;
- (id)meanValueDescription;
- (double)meanYValue;
- (id)name;
- (void)setAttributedName:(id)arg1;
- (void)setDataPoints:(id)arg1;
- (void)setIsContinuous:(bool)arg1;
- (void)setMeanValueDescription:(id)arg1;
- (void)setName:(id)arg1;

@end
