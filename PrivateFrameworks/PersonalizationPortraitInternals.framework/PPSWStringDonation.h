
@interface PPSWStringDonation : NSObject <BMIdentifiableContentEvent> {
    void absoluteTimestamp;
    void extractionContent;
    void shouldConsume;
    void source;
    void uniqueId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, copy) NSString *extractionContent;
@property (nonatomic) bool shouldConsume;
@property (nonatomic, retain) PPSource *source;
@property (nonatomic, copy) NSString *uniqueId;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)extractionContent;
- (id)init;
- (id)initWithLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setExtractionContent:(id)arg1;
- (void)setShouldConsume:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (bool)shouldConsume;
- (id)source;
- (id)uniqueId;

@end
