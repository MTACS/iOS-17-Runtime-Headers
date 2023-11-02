
@interface SHReferenceSignature : NSObject {
    NSString * _ID;
    SHSignature * _signature;
    unsigned long long  _trackID;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly) SHSignature *signature;
@property (nonatomic, readonly) unsigned long long trackID;

- (void).cxx_destruct;
- (id)ID;
- (id)initWithID:(id)arg1 trackID:(unsigned long long)arg2 signature:(id)arg3;
- (id)signature;
- (unsigned long long)trackID;

@end
