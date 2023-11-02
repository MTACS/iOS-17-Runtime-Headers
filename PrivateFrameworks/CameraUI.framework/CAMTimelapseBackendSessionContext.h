
@interface CAMTimelapseBackendSessionContext : NSObject {
    NSArray * _filesToDelete;
    NSArray * _filesToWrite;
    CAMTimelapseState * _state;
    NSString * _timelapseUUID;
}

@property (nonatomic, retain) NSArray *filesToDelete;
@property (nonatomic, retain) NSArray *filesToWrite;
@property (nonatomic, retain) CAMTimelapseState *state;
@property (nonatomic, readonly) NSString *timelapseUUID;

- (void).cxx_destruct;
- (id)description;
- (id)filesToDelete;
- (id)filesToWrite;
- (id)init;
- (id)initWithTimelapseUUID:(id)arg1;
- (void)setFilesToDelete:(id)arg1;
- (void)setFilesToWrite:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;
- (id)timelapseUUID;

@end
