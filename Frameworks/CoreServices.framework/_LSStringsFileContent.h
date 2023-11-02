
@interface _LSStringsFileContent : NSObject {
    struct { 
        unsigned int hasLookedForLoctable : 1; 
    }  _flags;
    _LSLazyPropertyList * _loctable;
    NSString * _stringsFile;
    NSMutableDictionary * _stringsFileContent;
}

+ (id)IOQueue;

- (void).cxx_destruct;
- (id)debugDescription;

@end
