
@interface CNHandleStringClassifier : NSObject {
    <_CNHandleStringClassificationStrategy> * _classificationStrategy;
}

@property (nonatomic, readonly) <_CNHandleStringClassificationStrategy> *classificationStrategy;

+ (id)classificationOfHandleStrings:(id)arg1;
+ (id)classificationOfHandleStrings:(id)arg1 classificationQuality:(unsigned long long)arg2;
+ (id)classificationStrategyForQuality:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)classificationStrategy;
- (void)classifyHandleString:(id)arg1 builder:(id)arg2;
- (id)description;
- (id)init;
- (id)initWithClassificationQuality:(unsigned long long)arg1;
- (id)initWithClassificationStrategy:(id)arg1;
- (unsigned long long)typeOfHandleString:(id)arg1;

@end
