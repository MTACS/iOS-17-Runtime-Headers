
@interface MusicKit_SoftLinking_MPServerObjectDatabase : NSObject {
    MPServerObjectDatabase * _underlyingServerObjectDatabase;
}

+ (id)sharedServerObjectDatabase;

- (void).cxx_destruct;
- (id)_initWithUnderlyingServerObjectDatabase:(id)arg1;
- (id)importObjectsFromRequest:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)payloadDataForIdentifier:(id)arg1 identifierKinds:(long long)arg2 error:(id*)arg3;

@end
