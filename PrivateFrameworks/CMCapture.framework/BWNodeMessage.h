
@interface BWNodeMessage : NSObject {
    int  _category;
    int  _type;
}

@property (readonly) int category;
@property (readonly) int type;

- (int)category;
- (int)type;

@end
