
@interface BMMLSEShareSheetFeedbackTimeout : BMEventBase <BMStoreData> {
    int  _occurrence;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int occurrence;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithOccurrence:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)occurrence;
- (id)serialize;
- (void)writeTo:(id)arg1;

@end
