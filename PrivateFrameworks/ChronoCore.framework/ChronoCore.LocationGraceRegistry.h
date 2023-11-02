
@interface ChronoCore.LocationGraceRegistry : _TtCs12_SwiftObject <BSSharedMemoryStoreData> {
    void timeoutByIdentifier;
}

@property (nonatomic, readonly) long long serializedDataLength;

+ (id)deserializeFromReader:(id /* block */)arg1;

- (id)copyWithZone:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)serializeToWriter:(id /* block */)arg1;
- (long long)serializedDataLength;

@end
