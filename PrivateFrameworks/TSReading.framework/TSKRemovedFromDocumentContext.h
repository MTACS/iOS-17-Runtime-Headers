
@interface TSKRemovedFromDocumentContext : NSObject

+ (id)hidingContext;
+ (id)movingContext;

- (id)undoContext;
- (bool)wasHidden;
- (bool)wasMoved;

@end
