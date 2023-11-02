
@interface ECIMAPCopyInfo : NSObject {
    NSDictionary * _sourceUIDsToDestinationUIDs;
    unsigned int  _uidValidity;
}

@property (nonatomic, retain) NSDictionary *sourceUIDsToDestinationUIDs;
@property (nonatomic) unsigned int uidValidity;

- (void).cxx_destruct;
- (void)setSourceUIDsToDestinationUIDs:(id)arg1;
- (void)setUidValidity:(unsigned int)arg1;
- (id)sourceUIDsToDestinationUIDs;
- (unsigned int)uidValidity;

@end
