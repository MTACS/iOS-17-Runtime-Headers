
@interface NSSQLiteAdapter : NSObject {
    struct __CFDictionary { } * _cachedDeleteTriggersByEntity;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSQLModel * _model;
    NSSQLCore * _sqlCore;
}

- (void)dealloc;
- (id)initWithSQLCore:(id)arg1;
- (id)sqlCore;

@end
