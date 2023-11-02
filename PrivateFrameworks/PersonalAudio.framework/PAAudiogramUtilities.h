
@interface PAAudiogramUtilities : NSObject

+ (struct { unsigned int x1; unsigned int x2; })entryFromData:(id)arg1 atIndex:(unsigned int)arg2;
+ (id)normalizedOffsetsFromAudiogram:(id)arg1;
+ (id)presetFrequencies;
+ (id)ptaFrequencies;

@end
