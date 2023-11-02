
@interface DOCRemoteUIBarButtonItem : UIBarButtonItem <NSCopying> {
    NSUUID * _uuid;
}

@property (retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
