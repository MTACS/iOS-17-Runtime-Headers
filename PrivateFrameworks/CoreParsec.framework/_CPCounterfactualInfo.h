
@interface _CPCounterfactualInfo : PBCodable <NSSecureCoding, _CPCounterfactualInfo> {
    bool  _cfDiffered;
    int  _cfError;
    bool  _cfUsed;
}

@property (nonatomic) bool cfDiffered;
@property (nonatomic) int cfError;
@property (nonatomic) bool cfUsed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;

- (bool)cfDiffered;
- (int)cfError;
- (bool)cfUsed;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCfDiffered:(bool)arg1;
- (void)setCfError:(int)arg1;
- (void)setCfUsed:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
