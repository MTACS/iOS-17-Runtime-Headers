
@interface XRVMRegion : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _pageSize;
    int  current_prot;
    unsigned char  external_pager;
    bool  is_submap;
    unsigned long long  length;
    int  max_prot;
    unsigned int  pages_dirtied;
    unsigned int  pages_resident;
    unsigned int  pages_shared_now_private;
    unsigned int  pages_swapped_out;
    NSString * path;
    unsigned int  ref_count;
    unsigned int  region_page_shift;
    unsigned char  share_mode;
    unsigned long long  start;
    NSString * type;
    unsigned char  user_tag;
}

@property (nonatomic) unsigned long long pageSize;

+ (void)initialize;
+ (unsigned long long)regionIndexInArray:(id)arg1 forAddress:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setResident:(unsigned int)arg1 dirty:(unsigned int)arg2 swapped:(unsigned int)arg3 speculative:(unsigned int)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)currentProtection;
- (id)description;
- (unsigned long long)dirtySize;
- (id)displayPath;
- (id)displayType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 regionInfo:(struct vm_region_submap_info_64 { int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; int x14; int x15; unsigned int x16; unsigned short x17; unsigned int x18; unsigned long long x19; }*)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isAdjacentTo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNullRegion;
- (bool)isSubmapRegion;
- (unsigned long long)location;
- (bool)matchesAddr:(unsigned long long)arg1 size:(unsigned long long)arg2 regionInfo:(struct vm_region_submap_info_64 { int x1; int x2; unsigned int x3; unsigned long long x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned short x11; unsigned char x12; unsigned char x13; int x14; int x15; unsigned int x16; unsigned short x17; unsigned int x18; unsigned long long x19; }*)arg3;
- (int)maxProtection;
- (unsigned long long)pageSize;
- (id)path;
- (bool)regionMatch:(id)arg1;
- (unsigned long long)residentSize;
- (void)setAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)setPageSize:(unsigned long long)arg1;
- (void)setPath:(id)arg1 type:(id)arg2;
- (unsigned long long)swappedSize;
- (unsigned char)tag;
- (id)type;
- (bool)typeMatches:(id)arg1;
- (unsigned int)virtualPages;
- (unsigned long long)virtualSize;

@end
