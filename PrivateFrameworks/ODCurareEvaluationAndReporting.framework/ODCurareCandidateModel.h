
@interface ODCurareCandidateModel : NSObject {
    BMStoreStream * _BMModelDataStream;
    NSString * _BMModelDataStreamIdentifier;
    <_DKKnowledgeQuerying> * _CDModelDataStream;
    NSString * _CDModelDataStreamIdentifier;
    id  _CDQuery;
    id /* block */  _bmReceiveInputBlock;
    bool  _isDefaultModel;
    bool  _isPersonalizableModel;
    MLModelConfiguration * _modelConfiguration;
    NSString * _modelTag;
    NSURL * _modelURL;
}

@property (nonatomic, retain) BMStoreStream *BMModelDataStream;
@property (nonatomic, retain) NSString *BMModelDataStreamIdentifier;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *CDModelDataStream;
@property (nonatomic, retain) NSString *CDModelDataStreamIdentifier;
@property (nonatomic, retain) id CDQuery;
@property (nonatomic, copy) id /* block */ bmReceiveInputBlock;
@property (nonatomic) bool isDefaultModel;
@property (nonatomic) bool isPersonalizableModel;
@property (nonatomic, retain) MLModelConfiguration *modelConfiguration;
@property (nonatomic, retain) NSString *modelTag;
@property (nonatomic, retain) NSURL *modelURL;

- (void).cxx_destruct;
- (id)BMModelDataStream;
- (id)BMModelDataStreamIdentifier;
- (id)CDModelDataStream;
- (id)CDModelDataStreamIdentifier;
- (id)CDQuery;
- (void)_setBiomeFilter:(id)arg1 fromInclusive:(id)arg2 toDate:(id)arg3 toInclusive:(id)arg4;
- (void)_setCoreDuetQuery:(id)arg1 fromInclusive:(id)arg2 toDate:(id)arg3 toInclusive:(id)arg4;
- (id /* block */)bmReceiveInputBlock;
- (id)description;
- (id)getDatesOfEventsForStream;
- (bool)hasStreamFilter;
- (id)initWithModelURL:(id)arg1 withBiomeStream:(id)arg2 andMetadata:(id)arg3;
- (id)initWithModelURL:(id)arg1 withBiomeStream:(id)arg2 withBiomeStreamIdentifier:(id)arg3 withModelTag:(id)arg4 andMetadata:(id)arg5;
- (id)initWithModelURL:(id)arg1 withBiomeStreamIdentifier:(id)arg2 andMetadata:(id)arg3;
- (id)initWithModelURL:(id)arg1 withCoreDuetStream:(id)arg2 withCoreDuetStreamIdentifier:(id)arg3 andMetadata:(id)arg4;
- (id)initWithModelURL:(id)arg1 withCoreDuetStream:(id)arg2 withCoreDuetStreamIdentifier:(id)arg3 withModelTag:(id)arg4 andMetadata:(id)arg5;
- (id)initWithModelURL:(id)arg1 withCoreDuetStreamIdentifier:(id)arg2 andMetadata:(id)arg3;
- (bool)isDefaultModel;
- (bool)isPersonalizableModel;
- (id)modelConfiguration;
- (id)modelTag;
- (id)modelURL;
- (void)setBMModelDataStream:(id)arg1;
- (void)setBMModelDataStreamIdentifier:(id)arg1;
- (void)setBmReceiveInputBlock:(id /* block */)arg1;
- (void)setCDModelDataStream:(id)arg1;
- (void)setCDModelDataStreamIdentifier:(id)arg1;
- (void)setCDQuery:(id)arg1;
- (void)setIsDefaultModel:(bool)arg1;
- (void)setIsPersonalizableModel:(bool)arg1;
- (void)setModelConfiguration:(id)arg1;
- (void)setModelTag:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setStreamFilter:(id)arg1 fromInclusive:(id)arg2 toDate:(id)arg3 toInclusive:(id)arg4;

@end
