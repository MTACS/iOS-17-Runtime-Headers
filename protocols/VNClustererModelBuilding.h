
@protocol VNClustererModelBuilding

@required

- (bool)resetModelState:(NSData *)arg1 error:(id*)arg2;
- (NSData *)saveAndReturnCurrentModelState:(id*)arg1;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 andRemovingFaces:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id*)arg4;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 andRemovingFaces:(NSArray *)arg3 canceller:(VNCanceller *)arg4 error:(id*)arg5;
- (NSArray *)updateModelByAddingPersons:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 andRemovingPersons:(NSArray *)arg3 canceller:(VNCanceller *)arg4 error:(id*)arg5;

@optional

- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id*)arg3;
- (NSArray *)updateModelByAddingFaces:(NSArray *)arg1 withGroupingIdentifiers:(NSArray *)arg2 canceller:(VNCanceller *)arg3 error:(id*)arg4;
- (NSArray *)updateModelByRemovingFaces:(NSArray *)arg1 canceller:(VNCanceller *)arg2 error:(id*)arg3;

@end
