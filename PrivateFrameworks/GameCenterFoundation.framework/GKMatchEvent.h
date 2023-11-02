
@interface GKMatchEvent : NSObject {
    NSData * _data;
    GKPlayer * _recipientPlayer;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) GKPlayer *recipientPlayer;

- (void).cxx_destruct;
- (id)data;
- (id)recipientPlayer;
- (void)setData:(id)arg1;
- (void)setRecipientPlayer:(id)arg1;

@end
