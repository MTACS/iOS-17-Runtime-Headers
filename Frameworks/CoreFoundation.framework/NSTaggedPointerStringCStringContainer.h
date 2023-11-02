
@interface NSTaggedPointerStringCStringContainer : NSObject {
    BOOL  cString;
}

+ (id)taggedPointerStringCStringContainer;

- (oneway void)release;
- (id)retain;

@end
