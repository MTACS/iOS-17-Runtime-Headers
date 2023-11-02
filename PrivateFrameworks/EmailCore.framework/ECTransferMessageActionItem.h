
@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying> {
    <ECMessage> * _destinationMessage;
    <ECMessage> * _sourceMessage;
    NSString * _sourceRemoteID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <ECMessage> *destinationMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <ECMessage> *sourceMessage;
@property (nonatomic, copy) NSString *sourceRemoteID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationMessage;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (void)setDestinationMessage:(id)arg1;
- (void)setSourceMessage:(id)arg1;
- (void)setSourceRemoteID:(id)arg1;
- (id)sourceMessage;
- (id)sourceRemoteID;

@end
