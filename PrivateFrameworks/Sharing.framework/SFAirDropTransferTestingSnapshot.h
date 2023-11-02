
@interface SFAirDropTransferTestingSnapshot : NSObject <NSSecureCoding> {
    NSDictionary * _initialInfo;
    NSString * _nodeContactIdentifier;
    NSSet * _nodeContactIdentifiers;
    NSString * _nodeDisplayName;
    NSString * _nodeIdentifier;
    NSString * _nodeRealName;
    SFAirDropTransfer * _transfer;
    NSData * _transferFileIcon;
    NSData * _transferSmallFileIcon;
}

@property (nonatomic, retain) NSDictionary *initialInfo;
@property (nonatomic, retain) NSString *nodeContactIdentifier;
@property (nonatomic, retain) NSSet *nodeContactIdentifiers;
@property (nonatomic, retain) NSString *nodeDisplayName;
@property (nonatomic, retain) NSString *nodeIdentifier;
@property (nonatomic, retain) NSString *nodeRealName;
@property (nonatomic, retain) SFAirDropTransfer *transfer;
@property (nonatomic, retain) NSData *transferFileIcon;
@property (nonatomic, retain) NSData *transferSmallFileIcon;

+ (id)loadSnapshotFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (id)writeSnapshotForTransfer:(id)arg1 initialInfo:(id)arg2 name:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTransfer:(id)arg1 initialInfo:(id)arg2;
- (id)initialInfo;
- (id)nodeContactIdentifier;
- (id)nodeContactIdentifiers;
- (id)nodeDisplayName;
- (id)nodeIdentifier;
- (id)nodeRealName;
- (void)setInitialInfo:(id)arg1;
- (void)setNodeContactIdentifier:(id)arg1;
- (void)setNodeContactIdentifiers:(id)arg1;
- (void)setNodeDisplayName:(id)arg1;
- (void)setNodeIdentifier:(id)arg1;
- (void)setNodeRealName:(id)arg1;
- (void)setTransfer:(id)arg1;
- (void)setTransferFileIcon:(id)arg1;
- (void)setTransferSmallFileIcon:(id)arg1;
- (id)transfer;
- (id)transferFileIcon;
- (id)transferSmallFileIcon;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
