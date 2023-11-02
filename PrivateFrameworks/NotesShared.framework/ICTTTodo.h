
@interface ICTTTodo : NSObject <NSCopying> {
    bool  _done;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) bool done;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)done;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 done:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (id)todoWithDone:(bool)arg1;
- (id)uuid;

@end
