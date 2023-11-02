
@interface CUKeychainManager : NSObject

- (id)_copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (id)_copyItemsMatchingItemSeparate:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (bool)addItem:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (id)addItem:(id)arg1 returnFlags:(unsigned int)arg2 error:(id*)arg3;
- (bool)addOrUpdateOrReAddItem:(id)arg1 flags:(unsigned int)arg2 logCategory:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)arg3 logLabel:(id)arg4 error:(id*)arg5;
- (bool)addOrUpdateOrReAddItem:(id)arg1 logCategory:(struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)arg2 logLabel:(id)arg3 error:(id*)arg4;
- (id)copyItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (id)copyItemsMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (bool)removeItemMatchingItem:(id)arg1 error:(id*)arg2;
- (bool)removeItemMatchingItem:(id)arg1 flags:(unsigned int)arg2 error:(id*)arg3;
- (bool)updateItem:(id)arg1 matchingItem:(id)arg2 error:(id*)arg3;
- (bool)updateItem:(id)arg1 matchingItem:(id)arg2 flags:(unsigned int)arg3 error:(id*)arg4;

@end
