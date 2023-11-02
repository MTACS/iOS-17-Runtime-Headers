
@interface BWFormat : NSObject

@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) unsigned int mediaType;

+ (id)formatByResolvingRequirements:(id)arg1;
+ (id)formatByResolvingRequirements:(id)arg1 printErrors:(bool)arg2;

- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned int)mediaType;

@end
