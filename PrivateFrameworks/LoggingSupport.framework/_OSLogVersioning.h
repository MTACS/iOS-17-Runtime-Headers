
@interface _OSLogVersioning : NSObject {
    bool  _closeOnRelease;
    bool  _hasEndTimeRef;
    _OSLogCollectionReference * _lcr;
    long long  _state;
    long long  _version;
}

@property (nonatomic, readonly) bool hasEndTimeRef;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (bool)checkTimesyncDB:(bool*)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)hasEndTimeRef;
- (id)initWithCollection:(id)arg1 closeOnRelease:(bool)arg2 error:(id*)arg3;
- (id)initWithCollection:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)performDestructiveUpdates:(id*)arg1;
- (bool)repairTimesyncDB:(id*)arg1;
- (long long)state;
- (long long)version;

@end
