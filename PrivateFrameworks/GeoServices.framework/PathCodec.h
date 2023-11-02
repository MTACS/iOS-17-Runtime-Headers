
@interface PathCodec : NSObject

+ (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })compress:(const void*)arg1;
+ (void)compressInPlace:(void*)arg1;
+ (id)dataForRoutingPathLeg:(const void*)arg1;
+ (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })decompress:(const void*)arg1;
+ (void)decompressInPlace:(void*)arg1;
+ (id)descriptionForRoutingPathLeg:(const void*)arg1;
+ (struct RoutingPathLeg { int (**x1)(); struct InternalMetadata { void *x_2_1_1; } x2; struct HasBits<1UL> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__cxx_atomic_base_impl<int>> { _Atomic int x_1_3_1; } x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<maps::path_codec::geo3::RoutingPathPoint> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; struct ArenaStringPtr { struct TaggedPtr<std::string> { void *x_1_2_1; } x_6_1_1; } x6; })routingPathLegForData:(id)arg1;

@end
