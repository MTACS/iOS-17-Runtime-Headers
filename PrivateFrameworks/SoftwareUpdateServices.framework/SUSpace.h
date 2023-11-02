
@interface SUSpace : NSObject

+ (unsigned long long)currentFreeSpaceForVolume:(id)arg1;
+ (id)hasSufficientSpaceWithOptions:(id)arg1 error:(id*)arg2;
+ (void)hasSufficientSpaceWithOptions:(id)arg1 withCompletion:(id /* block */)arg2;
+ (void)makeRoomForUpdate:(id)arg1 completion:(id /* block */)arg2;
+ (bool)makeRoomForUpdate:(id)arg1 error:(id*)arg2;

@end
