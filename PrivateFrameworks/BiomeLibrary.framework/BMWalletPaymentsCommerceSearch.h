
@interface BMWalletPaymentsCommerceSearch : BMEventBase <BMStoreData> {
    bool  _hasTagClickDate;
    int  _passType;
    double  _tagClickDate;
    int  _tagSource;
    int  _tagType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasTagClickDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int passType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tagClickDate;
@property (nonatomic, readonly) int tagSource;
@property (nonatomic, readonly) int tagType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (unsigned int)dataVersion;
- (id)description;
- (bool)hasTagClickDate;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTagSource:(int)arg1 tagType:(int)arg2 passType:(int)arg3 tagClickDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)passType;
- (id)serialize;
- (void)setHasTagClickDate:(bool)arg1;
- (double)tagClickDate;
- (int)tagSource;
- (int)tagType;
- (void)writeTo:(id)arg1;

@end
