
@interface _MLNetworkHeaderEncoding : NSObject

+ (id)acknowledgeFailData;
+ (id)acknowledgeSucessData;
+ (id)constructDataPacket:(id)arg1 HeaderEncoding:(unsigned long long)arg2;
+ (id)custom:(id)arg1;
+ (unsigned long long)getHeaderDataSize:(id)arg1;
+ (void*)getHeaderDataStart:(id)arg1;
+ (unsigned long long)getHeaderEncoding:(id)arg1;
+ (void*)getHeaderEnd:(id)arg1;
+ (unsigned long long)getHeaderSize;
+ (bool)isHeaderAcknowledgeFailData:(unsigned long long)arg1;
+ (bool)isHeaderAcknowledgeSucessData:(unsigned long long)arg1;
+ (bool)isHeaderCustom:(unsigned long long)arg1;
+ (bool)isHeaderError:(unsigned long long)arg1;
+ (bool)isHeaderIncomingData:(unsigned long long)arg1;
+ (bool)isHeaderLoad:(unsigned long long)arg1;
+ (bool)isHeaderPredictFeature:(unsigned long long)arg1;
+ (bool)isHeaderText:(unsigned long long)arg1;
+ (bool)isHeaderUnLoad:(unsigned long long)arg1;
+ (id)loadModel:(id)arg1;
+ (id)predictFeature:(id)arg1;
+ (id)textDebug:(id)arg1;
+ (id)unLoadModel:(id)arg1;

@end
