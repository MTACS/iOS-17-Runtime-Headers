
@interface BRCEAccessReport : NSObject <NSSecureCoding> {
    bool  has_acls;
    unsigned long long  incidents;
    unsigned int  protection_class;
    unsigned int  st_flags;
    unsigned int  st_gid;
    unsigned short  st_mode;
    unsigned int  st_uid;
}

@property bool has_acls;
@property unsigned long long incidents;
@property unsigned int protection_class;
@property unsigned int st_flags;
@property unsigned int st_gid;
@property unsigned short st_mode;
@property unsigned int st_uid;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)has_acls;
- (unsigned long long)incidents;
- (id)initWithCoder:(id)arg1;
- (unsigned int)protection_class;
- (void)setHas_acls:(bool)arg1;
- (void)setIncidents:(unsigned long long)arg1;
- (void)setProtection_class:(unsigned int)arg1;
- (void)setSt_flags:(unsigned int)arg1;
- (void)setSt_gid:(unsigned int)arg1;
- (void)setSt_mode:(unsigned short)arg1;
- (void)setSt_uid:(unsigned int)arg1;
- (unsigned int)st_flags;
- (unsigned int)st_gid;
- (unsigned short)st_mode;
- (unsigned int)st_uid;

@end
