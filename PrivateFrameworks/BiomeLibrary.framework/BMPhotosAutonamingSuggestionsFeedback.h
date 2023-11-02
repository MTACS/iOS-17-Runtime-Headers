
@interface BMPhotosAutonamingSuggestionsFeedback : BMEventBase <BMStoreData> {
    int  _associationType;
    NSString * _feedbackId;
    int  _feedbackType;
    NSString * _visualId;
}

@property (nonatomic, readonly) int associationType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *feedbackId;
@property (nonatomic, readonly) int feedbackType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *visualId;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)associationType;
- (unsigned int)dataVersion;
- (id)description;
- (id)feedbackId;
- (int)feedbackType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithFeedbackType:(int)arg1 associationType:(int)arg2;
- (id)initWithFeedbackType:(int)arg1 associationType:(int)arg2 feedbackId:(id)arg3 visualId:(id)arg4;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (id)visualId;
- (void)writeTo:(id)arg1;

@end
