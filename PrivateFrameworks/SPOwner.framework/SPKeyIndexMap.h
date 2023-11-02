
@interface SPKeyIndexMap : NSObject {
    NSUUID * _beaconIdentifier;
    struct { struct _sp_key_index_map {} *x1; unsigned long long x2; } * _mapHandle;
    unsigned char  _sequence;
}

@property (readonly) NSUUID *beaconIdentifier;
@property (readonly) struct { struct _sp_key_index_map {} *x1; unsigned long long x2; }*mapHandle;
@property (readonly) unsigned char sequence;

- (void).cxx_destruct;
- (id)beaconIdentifier;
- (void)dealloc;
- (id)headerString;
- (id)init;
- (id)initWithBeaconIdentifier:(id)arg1 keySequence:(unsigned char)arg2 mapHandle:(struct { struct _sp_key_index_map {} *x1; unsigned long long x2; }*)arg3;
- (struct { struct _sp_key_index_map {} *x1; unsigned long long x2; }*)mapHandle;
- (unsigned char)sequence;

@end
