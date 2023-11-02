
@interface _CPLateSectionsAppendedFeedback : PBCodable <NSSecureCoding, _CPLateSectionsAppendedFeedback, _CPProcessableFeedback> {
    NSArray * _sections;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setSections:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
