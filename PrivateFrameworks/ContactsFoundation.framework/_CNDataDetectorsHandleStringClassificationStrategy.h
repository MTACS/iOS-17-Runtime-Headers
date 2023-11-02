
@interface _CNDataDetectorsHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)assistedDataDetectorsStrategy;
+ (id)dataDetectorsStrategy;

- (unsigned long long)classificationOfHandleString:(id)arg1;

@end
