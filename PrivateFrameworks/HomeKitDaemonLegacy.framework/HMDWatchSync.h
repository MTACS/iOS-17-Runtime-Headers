
@interface HMDWatchSync : HMFObject <NSCopying> {
    NSUUID * _identifier;
    bool  _inProgress;
    bool  _isRetry;
    unsigned long long  _syncOption;
}

@property (readonly, copy) NSUUID *identifier;
@property bool inProgress;
@property (readonly) bool isRetry;
@property unsigned long long syncOption;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (bool)inProgress;
- (id)initWithIdentifier:(id)arg1 syncOption:(unsigned long long)arg2;
- (id)initWithIdentifier:(id)arg1 syncOption:(unsigned long long)arg2 inProgress:(bool)arg3 isRetry:(bool)arg4;
- (id)initWithSyncOption:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isRetry;
- (void)setInProgress:(bool)arg1;
- (void)setSyncOption:(unsigned long long)arg1;
- (unsigned long long)syncOption;

@end
