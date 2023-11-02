
@interface VMUAbstractSerializer : NSObject {
    unsigned int  _cursor;
    unsigned int  _intRegCapacity;
    char * _intRegion;
    unsigned int  _stringRegCapacity;
    char * _stringRegion;
}

@end
