
@interface GQDRStrokePattern : NSObject {
    int  mType;
}

+ (id)solidPattern;

- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)type;

@end
