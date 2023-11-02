
@interface DAMoveResponse : NSObject {
    NSString * _destID;
    DAMessageMoveRequest * _origRequest;
    NSString * _sourceID;
    int  _status;
}

@property (nonatomic, copy) NSString *destID;
@property (nonatomic, retain) DAMessageMoveRequest *origRequest;
@property (nonatomic, copy) NSString *sourceID;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id)description;
- (id)destID;
- (id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3;
- (id)origRequest;
- (void)setDestID:(id)arg1;
- (void)setOrigRequest:(id)arg1;
- (void)setSourceID:(id)arg1;
- (void)setStatus:(int)arg1;
- (id)sourceID;
- (int)status;

@end
