
@interface MRNowPlayingClientCommandQueueEntry : NSObject {
    unsigned int  _command;
    id /* block */  _commandCompletion;
    NSDate * _dateCreated;
    NSMutableDictionary * _options;
    MRPlayerPath * _playerPath;
}

@property (nonatomic) unsigned int command;
@property (nonatomic, copy) id /* block */ commandCompletion;
@property (nonatomic, retain) NSDate *dateCreated;
@property (nonatomic, retain) NSMutableDictionary *options;
@property (nonatomic, retain) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (unsigned int)command;
- (id /* block */)commandCompletion;
- (id)dateCreated;
- (id)description;
- (id)options;
- (id)playerPath;
- (void)setCommand:(unsigned int)arg1;
- (void)setCommandCompletion:(id /* block */)arg1;
- (void)setDateCreated:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPlayerPath:(id)arg1;

@end
