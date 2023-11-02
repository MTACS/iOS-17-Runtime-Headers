
@interface BWFormatRequirements : NSObject

@property (readonly) unsigned int mediaType;

- (Class)formatClass;
- (id)init;
- (bool)isEmpty;
- (unsigned int)mediaType;

@end
