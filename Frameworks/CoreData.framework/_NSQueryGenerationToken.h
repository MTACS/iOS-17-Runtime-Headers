
@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    struct _queryGenerationFlags { 
        unsigned int _isCompound : 1; 
        unsigned int _isSingleton : 1; 
        unsigned int _freeValueOnDealloc : 1; 
        unsigned int _isUnmoored : 1; 
        unsigned int _reservedFlags : 12; 
    }  _flags;
    id  _generationIdentifier;
    _PFWeakReference * _store;
    NSString * _storeIdentifier;
}

+ (bool)supportsSecureCoding;

- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistentStoreCoordinator;
- (oneway void)release;
- (id)retain;

@end
