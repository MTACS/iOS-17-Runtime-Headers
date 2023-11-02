
@interface FBProcessExecutableSlice : NSObject {
    int  _subtype;
    int  _type;
}

@property (nonatomic, readonly) int subtype;
@property (nonatomic, readonly) int type;

+ (id)arm64;
+ (id)arm64e;
+ (id)sliceWithType:(int)arg1;
+ (id)sliceWithType:(int)arg1 subtype:(int)arg2;

- (id)description;
- (int)subtype;
- (int)type;

@end
