
@interface BatchMetadata : NSObject {
    NSString * _batchIdentifier;
    unsigned long long  _batchSize;
    int  _batchStatus;
    NSNumber * _category;
    NSDate * _dateCreated;
    NSDate * _dateLastProcessed;
    NSDate * _dateUploaded;
    unsigned long long  _eventCount;
    unsigned long long  _processedAttempts;
    NSString * _timestampReferenceIdentifier;
}

@property (nonatomic, copy) NSString *batchIdentifier;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) int batchStatus;
@property (nonatomic, retain) NSNumber *category;
@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, copy) NSDate *dateLastProcessed;
@property (nonatomic, copy) NSDate *dateUploaded;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) unsigned long long processedAttempts;
@property (nonatomic, copy) NSString *timestampReferenceIdentifier;

- (void).cxx_destruct;
- (id)batchIdentifier;
- (unsigned long long)batchSize;
- (int)batchStatus;
- (id)category;
- (id)dateCreated;
- (id)dateLastProcessed;
- (id)dateUploaded;
- (unsigned long long)eventCount;
- (unsigned long long)processedAttempts;
- (void)setBatchIdentifier:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBatchStatus:(int)arg1;
- (void)setCategory:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setDateLastProcessed:(id)arg1;
- (void)setDateUploaded:(id)arg1;
- (void)setEventCount:(unsigned long long)arg1;
- (void)setProcessedAttempts:(unsigned long long)arg1;
- (void)setTimestampReferenceIdentifier:(id)arg1;
- (id)timestampReferenceIdentifier;

@end
