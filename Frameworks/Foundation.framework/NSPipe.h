
@interface NSPipe : NSObject

@property (readonly, retain) NSFileHandle *fileHandleForReading;
@property (readonly, retain) NSFileHandle *fileHandleForWriting;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pipe;

- (void)_closeOnDealloc;
- (id)fileHandleForReading;
- (id)fileHandleForWriting;
- (id)init;

@end
