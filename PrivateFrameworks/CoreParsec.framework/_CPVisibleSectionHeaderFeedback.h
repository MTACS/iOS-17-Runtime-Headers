
@interface _CPVisibleSectionHeaderFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPVisibleSectionHeaderFeedback> {
    int  _headerType;
    NSString * _sectionId;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headerType;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *sectionId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (int)headerType;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sectionId;
- (void)setHeaderType:(int)arg1;
- (void)setSectionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
